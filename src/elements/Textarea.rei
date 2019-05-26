type t = ReDomTypes.element(ReDomTypes.textarea);
let cast: ReDomTypes.element('a) => option(t);
let create: unit => t;
let value: t => string;
