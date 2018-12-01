type t = Types.element(Types.img);
let cast: Element.t('a) => option(t);
let create: unit => t;
let src: t => string;
let setSrc: (t, string) => unit;
let blank: t;
