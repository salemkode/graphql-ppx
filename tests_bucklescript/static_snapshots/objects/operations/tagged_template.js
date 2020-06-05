// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


var Raw = { };

function parse(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = !(value$3 == null) ? value$3 : undefined;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = !(value$5 == null) ? value$5 : undefined;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = !(value$7 == null) ? value$7 : undefined;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = !(value$9 == null) ? value$9 : undefined;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = !(value$11 == null) ? value$11 : undefined;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function serialize(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function makeVariables(param) {
  
}

function makeDefaultVariables(param) {
  
}

var Z__INTERNAL = {
  graphql_module: 0
};

var MyQuery = {
  Raw: Raw,
  query: "query   {\nvariousScalars  {\nnullableString  \nstring  \nnullableInt  \nint  \nnullableFloat  \nfloat  \nnullableBoolean  \nboolean  \nnullableID  \nid  \n}\n\n}\n",
  parse: parse,
  serialize: serialize,
  makeVariables: makeVariables,
  makeDefaultVariables: makeDefaultVariables,
  Z__INTERNAL: Z__INTERNAL
};

var Raw$1 = { };

let { graphql } = require("gatsby")
;

var query = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$1(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = !(value$3 == null) ? value$3 : undefined;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = !(value$5 == null) ? value$5 : undefined;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = !(value$7 == null) ? value$7 : undefined;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = !(value$9 == null) ? value$9 : undefined;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = !(value$11 == null) ? value$11 : undefined;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function serialize$1(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function makeVariables$1(param) {
  
}

function makeDefaultVariables$1(param) {
  
}

var Z__INTERNAL$1 = {
  graphql_module: 0
};

var MyQuery2 = {
  Raw: Raw$1,
  query: query,
  parse: parse$1,
  serialize: serialize$1,
  makeVariables: makeVariables$1,
  makeDefaultVariables: makeDefaultVariables$1,
  Z__INTERNAL: Z__INTERNAL$1
};

var Raw$2 = { };

let { graphql } = require("gatsby")
;

var query$1 = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$2(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = !(value$3 == null) ? value$3 : undefined;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = !(value$5 == null) ? value$5 : undefined;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = !(value$7 == null) ? value$7 : undefined;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = !(value$9 == null) ? value$9 : undefined;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = !(value$11 == null) ? value$11 : undefined;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function serialize$2(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function makeVariables$2(param) {
  
}

function makeDefaultVariables$2(param) {
  
}

var Z__INTERNAL$2 = {
  graphql_module: 0
};

var MyQuery3 = {
  Raw: Raw$2,
  query: query$1,
  parse: parse$2,
  serialize: serialize$2,
  makeVariables: makeVariables$2,
  makeDefaultVariables: makeDefaultVariables$2,
  Z__INTERNAL: Z__INTERNAL$2
};

var Raw$3 = { };

let graphql = require("gatsby")
;

var query$2 = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$3(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = !(value$3 == null) ? value$3 : undefined;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = !(value$5 == null) ? value$5 : undefined;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = !(value$7 == null) ? value$7 : undefined;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = !(value$9 == null) ? value$9 : undefined;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = !(value$11 == null) ? value$11 : undefined;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function serialize$3(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  return {
          variousScalars: {
            nullableString: nullableString,
            string: value$10,
            nullableInt: nullableInt,
            int: value$8,
            nullableFloat: nullableFloat,
            float: value$6,
            nullableBoolean: nullableBoolean,
            boolean: value$4,
            nullableID: nullableID,
            id: value$2
          }
        };
}

function makeVariables$3(param) {
  
}

function makeDefaultVariables$3(param) {
  
}

var Z__INTERNAL$3 = {
  graphql_module: 0
};

var MyQuery4 = {
  Raw: Raw$3,
  query: query$2,
  parse: parse$3,
  serialize: serialize$3,
  makeVariables: makeVariables$3,
  makeDefaultVariables: makeDefaultVariables$3,
  Z__INTERNAL: Z__INTERNAL$3
};

exports.MyQuery = MyQuery;
exports.MyQuery2 = MyQuery2;
exports.MyQuery3 = MyQuery3;
exports.MyQuery4 = MyQuery4;
/*  Not a pure module */
