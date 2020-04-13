[@ocaml.ppx.context
  {
    tool_name: "migrate_driver",
    include_dirs: [],
    load_path: [],
    open_modules: [],
    for_package: None,
    debug: false,
    use_threads: false,
    use_vmthreads: false,
    recursive_types: false,
    principal: false,
    transparent_modules: false,
    unboxed_types: false,
    unsafe_string: false,
    cookies: [],
  }
];
module MyQuery = {
  module Raw = {
    type t = {first: t_first}
    and t_first = {
      __typename: string,
      inner: Js.Nullable.t(t_first_inner),
    }
    and t_first_inner = {
      __typename: string,
      inner: Js.Nullable.t(t_first_inner_inner),
    }
    and t_first_inner_inner = {
      __typename: string,
      field: string,
    };
  };
  let query = "query   {\nfirst: nestedObject  {\n__typename  \ninner  {\n__typename  \ninner  {\n__typename  \nfield  \n}\n\n}\n\n}\n\n}\n";
  type t = {first: t_first}
  and t_first = {
    __typename: string,
    inner: option(t_first_inner),
  }
  and t_first_inner = {
    __typename: string,
    inner: option(t_first_inner_inner),
  }
  and t_first_inner_inner = {
    __typename: string,
    field: string,
  };
  let parse: Raw.t => t =
    (value) => (
      {

        first: {
          let value = (value: Raw.t).first;
          (
            {

              __typename: {
                let value = (value: Raw.t_first).__typename;

                value;
              },

              inner: {
                let value = (value: Raw.t_first).inner;

                switch (Js.toOption(value)) {
                | Some(value) =>
                  Some(
                    {

                      __typename: {
                        let value = (value: Raw.t_first_inner).__typename;

                        value;
                      },

                      inner: {
                        let value = (value: Raw.t_first_inner).inner;

                        switch (Js.toOption(value)) {
                        | Some(value) =>
                          Some(
                            {

                              __typename: {
                                let value =
                                  (value: Raw.t_first_inner_inner).__typename;

                                value;
                              },

                              field: {
                                let value =
                                  (value: Raw.t_first_inner_inner).field;

                                value;
                              },
                            }: t_first_inner_inner,
                          )
                        | None => None
                        };
                      },
                    }: t_first_inner,
                  )
                | None => None
                };
              },
            }: t_first
          );
        },
      }: t
    );
  let makeVar = (~f, ()) => f(Js.Json.null);
  let definition = (parse, query, makeVar);
};
