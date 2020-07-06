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

module ListFragment = {
  [@ocaml.warning "-32"];
  module Raw = {
    type t = {
      __typename: string,
      nullableOfNullable: Js.Nullable.t(array(Js.Nullable.t(string))),
    };
    type nonrec t_Lists = t;
  };
  type t = {
    __typename: string,
    nullableOfNullable: option(array(option(string))),
  };
  type nonrec t_Lists = t;
  /**The GraphQL query string*/
  let query = "fragment ListFragment on Lists   {\n__typename  \nnullableOfNullable  \n}\n";
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      __typename: {
        let value = (value: Raw.t).__typename;
        value;
      },
      nullableOfNullable: {
        let value = (value: Raw.t).nullableOfNullable;
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
    }: t
  );
  let verifyArgsAndParse =
      (~fragmentName as _ListFragment: [ | `ListFragment], value: Raw.t) =>
    parse(value);
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    {
      let nullableOfNullable = {
        let value = (value: t).nullableOfNullable;
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
        let value = (value: t).__typename;
        value;
      };
      {__typename, nullableOfNullable};
    }: Raw.t
  );
  let verifyName =
    fun
    | `ListFragment => ();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql;
    /**```
Lists {
  nullableOfNullable: [String]
  nullableOfNonNullable: [String!]
  nonNullableOfNullable: [String]!
  nonNullableOfNonNullable: [String!]!
  listWithArg: [String]
}
```*/
    let graphql: graphql = Obj.magic(0);
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module GraphQL {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};

module Another = {
  [@ocaml.warning "-32"];
  module Raw = {
    type t;
    type nonrec t_Lists = t;
  };
  type t = {
    __typename: string,
    nullableOfNullable: option(array(option(string))),
    listFragment: ListFragment.t_Lists,
  };
  type nonrec t_Lists = t;
  /**The GraphQL query string*/
  let query =
    "fragment Another on Lists   {\n__typename  \nnullableOfNullable  \n...ListFragment   \n}\n"
    ++ ListFragment.query;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      __typename: {
        let value =
          Obj.magic(Js.Dict.unsafeGet(Obj.magic(value), "__typename"));
        value;
      },
      nullableOfNullable: {
        let value =
          Obj.magic(
            Js.Dict.unsafeGet(Obj.magic(value), "nullableOfNullable"),
          );
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
      listFragment: {
        let value: ListFragment.Raw.t = Obj.magic(value);

        ListFragment.verifyArgsAndParse(~fragmentName=`ListFragment, value);
      },
    }: t
  );
  let verifyArgsAndParse =
      (~fragmentName as _Another: [ | `Another], value: Raw.t) =>
    parse(value);
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    Obj.magic(
      Js.Array.reduce(
        GraphQL_PPX.deepMerge,
        Obj.magic(
          {
            let nullableOfNullable = {
              let value = (value: t).nullableOfNullable;
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
              let value = (value: t).__typename;
              value;
            };
            {
              "__typename": __typename,
              "nullableOfNullable": nullableOfNullable,
            };
          },
        ): Js.Json.t,
        [|
          (
            Obj.magic(ListFragment.serialize((value: t).listFragment)): Js.Json.t
          ),
        |],
      ),
    ): Raw.t
  );
  let verifyName =
    fun
    | `Another => ();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql;
    /**```
Lists {
  nullableOfNullable: [String]
  nullableOfNonNullable: [String!]
  nonNullableOfNullable: [String]!
  nonNullableOfNonNullable: [String!]!
  listWithArg: [String]
}
```*/
    let graphql: graphql = Obj.magic(0);
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module GraphQL {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
