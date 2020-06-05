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
module RecordsQuery = {
  module Raw = {
    type t_lists = {
      __typename: string,
      nullableOfNullable: Js.Nullable.t(array(Js.Nullable.t(string))),
      nullableOfNonNullable: Js.Nullable.t(array(string)),
      nonNullableOfNullable: array(Js.Nullable.t(string)),
      nonNullableOfNonNullable: array(string),
    };
    type t = {lists: t_lists};
    type t_variables = unit;
  };
  let query = "query   {\nlists  {\n__typename  \nnullableOfNullable  \nnullableOfNonNullable  \nnonNullableOfNullable  \nnonNullableOfNonNullable  \n}\n\n}\n";
  type t_lists = {
    __typename: string,
    nullableOfNullable: option(array(option(string))),
    nullableOfNonNullable: option(array(string)),
    nonNullableOfNullable: array(option(string)),
    nonNullableOfNonNullable: array(string),
  };
  type t = {lists: t_lists};
  type t_variables = unit;
  let parse: Raw.t => t =
    (value) => (
      {
        lists: {
          let value = (value: Raw.t).lists;
          (
            {
              __typename: {
                let value = (value: Raw.t_lists).__typename;
                value;
              },
              nullableOfNullable: {
                let value = (value: Raw.t_lists).nullableOfNullable;
                switch (Js.toOption(value)) {
                | Some(value) =>
                  Some(
                    value
                    |> Js.Array.map(value =>
                         switch (Js.toOption(value)) {
                         | Some(value) => Some(value)
                         | None => None
                         }
                       ),
                  )
                | None => None
                };
              },
              nullableOfNonNullable: {
                let value = (value: Raw.t_lists).nullableOfNonNullable;
                switch (Js.toOption(value)) {
                | Some(value) => Some(value |> Js.Array.map(value => value))
                | None => None
                };
              },
              nonNullableOfNullable: {
                let value = (value: Raw.t_lists).nonNullableOfNullable;
                value
                |> Js.Array.map(value =>
                     switch (Js.toOption(value)) {
                     | Some(value) => Some(value)
                     | None => None
                     }
                   );
              },
              nonNullableOfNonNullable: {
                let value = (value: Raw.t_lists).nonNullableOfNonNullable;
                value |> Js.Array.map(value => value);
              },
            }: t_lists
          );
        },
      }: t
    );
  let serialize: t => Raw.t =
    (value) => (
      {
        let lists = {
          let value = (value: t).lists;
          (
            {
              let nonNullableOfNonNullable = {
                let value = (value: t_lists).nonNullableOfNonNullable;
                value |> Js.Array.map(value => value);
              }
              and nonNullableOfNullable = {
                let value = (value: t_lists).nonNullableOfNullable;
                value
                |> Js.Array.map(value =>
                     switch (value) {
                     | Some(value) => Js.Nullable.return(value)
                     | None => Js.Nullable.null
                     }
                   );
              }
              and nullableOfNonNullable = {
                let value = (value: t_lists).nullableOfNonNullable;
                switch (value) {
                | Some(value) =>
                  Js.Nullable.return(value |> Js.Array.map(value => value))
                | None => Js.Nullable.null
                };
              }
              and nullableOfNullable = {
                let value = (value: t_lists).nullableOfNullable;
                switch (value) {
                | Some(value) =>
                  Js.Nullable.return(
                    value
                    |> Js.Array.map(value =>
                         switch (value) {
                         | Some(value) => Js.Nullable.return(value)
                         | None => Js.Nullable.null
                         }
                       ),
                  )
                | None => Js.Nullable.null
                };
              }
              and __typename = {
                let value = (value: t_lists).__typename;
                value;
              };
              {
                __typename,
                nullableOfNullable,
                nullableOfNonNullable,
                nonNullableOfNullable,
                nonNullableOfNonNullable,
              };
            }: Raw.t_lists
          );
        };
        {lists: lists};
      }: Raw.t
    );
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- GraphQL PPX Module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module RecordsQuery {
  // This is the stringified representation of your query, which gets sent to the server.
  let query: string;

  // This is the main type of the result you will get back.
  // You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  type t;

  // This function turns your raw result from the server into the reason/ocaml representation of that result.
  // Depending on your graphql client library, this process should happen automatically for you.
  let parse: Raw.t => t;

  // This function will prepare your data for sending it back to the server.
  // Depending on your graphql client library, this process should happen automatically for you.
  let serialize: t => Raw.t;

  // The definition tuple is primarily used to interact with client libraries.
  // The types are equivalent to: (parse, query, serialize).
  // Your client library will use these values to provide the properly parsed / serialized data for you.
  let definition: (
    Raw.t => t,
    string,
    t => Raw.t
  );

  // This is the representation of your raw result coming from the server.
  // It should not be necessary to access the types inside for normal use cases.
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
module ObjectsQuery = {
  module Raw = {
    type t_lists = {
      .
      "__typename": string,
      "nullableOfNullable": Js.Nullable.t(array(Js.Nullable.t(string))),
      "nullableOfNonNullable": Js.Nullable.t(array(string)),
      "nonNullableOfNullable": array(Js.Nullable.t(string)),
      "nonNullableOfNonNullable": array(string),
    };
    type t = {. "lists": t_lists};
    type t_variables = unit;
  };
  let query = "query   {\nlists  {\n__typename  \nnullableOfNullable  \nnullableOfNonNullable  \nnonNullableOfNullable  \nnonNullableOfNonNullable  \n}\n\n}\n";
  type t_lists = {
    .
    "__typename": string,
    "nullableOfNullable": option(array(option(string))),
    "nullableOfNonNullable": option(array(string)),
    "nonNullableOfNullable": array(option(string)),
    "nonNullableOfNonNullable": array(string),
  };
  type t = {. "lists": t_lists};
  type t_variables = unit;
  let parse: Raw.t => t =
    value => {
      let lists = {
        let value = value##lists;
        let nonNullableOfNonNullable = {
          let value = value##nonNullableOfNonNullable;
          value |> Js.Array.map(value => value);
        }
        and nonNullableOfNullable = {
          let value = value##nonNullableOfNullable;
          value
          |> Js.Array.map(value =>
               switch (Js.toOption(value)) {
               | Some(value) => Some(value)
               | None => None
               }
             );
        }
        and nullableOfNonNullable = {
          let value = value##nullableOfNonNullable;
          switch (Js.toOption(value)) {
          | Some(value) => Some(value |> Js.Array.map(value => value))
          | None => None
          };
        }
        and nullableOfNullable = {
          let value = value##nullableOfNullable;
          switch (Js.toOption(value)) {
          | Some(value) =>
            Some(
              value
              |> Js.Array.map(value =>
                   switch (Js.toOption(value)) {
                   | Some(value) => Some(value)
                   | None => None
                   }
                 ),
            )
          | None => None
          };
        }
        and __typename = {
          let value = value##__typename;
          value;
        };
        {
          "__typename": __typename,
          "nullableOfNullable": nullableOfNullable,
          "nullableOfNonNullable": nullableOfNonNullable,
          "nonNullableOfNullable": nonNullableOfNullable,
          "nonNullableOfNonNullable": nonNullableOfNonNullable,
        };
      };
      {"lists": lists};
    };
  let serialize: t => Raw.t =
    value => {
      let lists = {
        let value = value##lists;
        let nonNullableOfNonNullable = {
          let value = value##nonNullableOfNonNullable;
          value |> Js.Array.map(value => value);
        }
        and nonNullableOfNullable = {
          let value = value##nonNullableOfNullable;
          value
          |> Js.Array.map(value =>
               switch (value) {
               | Some(value) => Js.Nullable.return(value)
               | None => Js.Nullable.null
               }
             );
        }
        and nullableOfNonNullable = {
          let value = value##nullableOfNonNullable;
          switch (value) {
          | Some(value) =>
            Js.Nullable.return(value |> Js.Array.map(value => value))
          | None => Js.Nullable.null
          };
        }
        and nullableOfNullable = {
          let value = value##nullableOfNullable;
          switch (value) {
          | Some(value) =>
            Js.Nullable.return(
              value
              |> Js.Array.map(value =>
                   switch (value) {
                   | Some(value) => Js.Nullable.return(value)
                   | None => Js.Nullable.null
                   }
                 ),
            )
          | None => Js.Nullable.null
          };
        }
        and __typename = {
          let value = value##__typename;
          value;
        };
        {
          "__typename": __typename,
          "nullableOfNullable": nullableOfNullable,
          "nullableOfNonNullable": nullableOfNonNullable,
          "nonNullableOfNullable": nonNullableOfNullable,
          "nonNullableOfNonNullable": nonNullableOfNonNullable,
        };
      };
      {"lists": lists};
    };
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- GraphQL PPX Module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module ObjectsQuery {
  // This is the stringified representation of your query, which gets sent to the server.
  let query: string;

  // This is the main type of the result you will get back.
  // You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  type t;

  // This function turns your raw result from the server into the reason/ocaml representation of that result.
  // Depending on your graphql client library, this process should happen automatically for you.
  let parse: Raw.t => t;

  // This function will prepare your data for sending it back to the server.
  // Depending on your graphql client library, this process should happen automatically for you.
  let serialize: t => Raw.t;

  // The definition tuple is primarily used to interact with client libraries.
  // The types are equivalent to: (parse, query, serialize).
  // Your client library will use these values to provide the properly parsed / serialized data for you.
  let definition: (
    Raw.t => t,
    string,
    t => Raw.t
  );

  // This is the representation of your raw result coming from the server.
  // It should not be necessary to access the types inside for normal use cases.
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
