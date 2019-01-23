type t = Types.element(Types.input);
let cast: Types.element('a) => option(t);
let create: unit => t;
let value: t => string;
