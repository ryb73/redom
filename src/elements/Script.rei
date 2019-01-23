type t = Types.element(Types.script);
let cast: Types.element('a) => option(t);
let create: unit => t;

let src: t => string;
let setSrc: (string, t) => t;
