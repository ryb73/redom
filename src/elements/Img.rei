type t = Types.element(Types.img);
let cast: Element.t('a) => option(t);
let create: unit => t;
let src: t => string;
let setSrc: (string, t) => t;
let blank: t;
