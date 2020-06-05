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
    type t_pokemon = {
      id: string,
      name: Js.Nullable.t(string),
    };
    type t = {pokemon: Js.Nullable.t(t_pokemon)};
    type t_variables = {
      id: Js.Nullable.t(string),
      name: Js.Nullable.t(string),
    };
  };
  let query = "query pokemon($id: String, $name: String)  {\npokemon(name: $name, id: $id)  {\nid  \nname  \n}\n\n}\n";
  type t_pokemon = {
    id: string,
    name: option(string),
  };
  type t = {pokemon: option(t_pokemon)};
  type t_variables = {
    id: option(string),
    name: option(string),
  };
  let parse: Raw.t => t =
    (value) => (
      {
        pokemon: {
          let value = (value: Raw.t).pokemon;
          switch (Js.toOption(value)) {
          | Some(value) =>
            Some(
              {
                id: {
                  let value = (value: Raw.t_pokemon).id;
                  value;
                },
                name: {
                  let value = (value: Raw.t_pokemon).name;
                  switch (Js.toOption(value)) {
                  | Some(value) => Some(value)
                  | None => None
                  };
                },
              }: t_pokemon,
            )
          | None => None
          };
        },
      }: t
    );
  let serialize: t => Raw.t =
    (value) => (
      {
        let pokemon = {
          let value = (value: t).pokemon;
          switch (value) {
          | Some(value) =>
            Js.Nullable.return(
              {
                let name = {
                  let value = (value: t_pokemon).name;
                  switch (value) {
                  | Some(value) => Js.Nullable.return(value)
                  | None => Js.Nullable.null
                  };
                }
                and id = {
                  let value = (value: t_pokemon).id;
                  value;
                };
                {id, name};
              }: Raw.t_pokemon,
            )
          | None => Js.Nullable.null
          };
        };
        {pokemon: pokemon};
      }: Raw.t
    );
  let serializeVariables: t_variables => Raw.t_variables =
    inp => {
      id:
        (
          a =>
            switch (a) {
            | None => Js.Nullable.undefined
            | Some(b) => Js.Nullable.return((a => a)(b))
            }
        )(
          (inp: t_variables).id,
        ),
      name:
        (
          a =>
            switch (a) {
            | None => Js.Nullable.undefined
            | Some(b) => Js.Nullable.return((a => a)(b))
            }
        )(
          (inp: t_variables).name,
        ),
    };
  let makeVariables = (~id=?, ~name=?, ()) =>
    serializeVariables({id, name}: t_variables);
  let makeDefaultVariables = () => makeVariables();
  module Z__INTERNAL = {
    type nonrec _graphql_name_100;
    /**Variable **$name** has the following graphql type:

```
String
```*/
    let _graphql_name_100: _graphql_name_100 = Obj.magic(0);
    type nonrec _graphql_name_94;
    /**Argument **name** on field **pokemon** has the following graphql type:

```
String
```*/
    let _graphql_name_94: _graphql_name_94 = Obj.magic(0);
    type nonrec _graphql_id_111;
    /**Variable **$id** has the following graphql type:

```
String
```*/
    let _graphql_id_111: _graphql_id_111 = Obj.magic(0);
    type nonrec _graphql_id_107;
    /**Argument **id** on field **pokemon** has the following graphql type:

```
String
```*/
    let _graphql_id_107: _graphql_id_107 = Obj.magic(0);
    type root = t;
    type nonrec graphql_module;
    /****--- GraphQL PPX Module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module MyQuery {
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
