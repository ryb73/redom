type t = Types.element(Types.script);
let cast: Element.t('a) => option(t);
let create: unit => t;

let src: t => string;
let setSrc: (string, t) => t;
