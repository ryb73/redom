type t = ReDomTypes.element(ReDomTypes.img);
let cast: ReDomTypes.element('a) => option(t);
let create: unit => t;
let src: t => string;
let setSrc: (string, t) => t;
let blank: t;
