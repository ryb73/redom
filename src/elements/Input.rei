type t = ReDomTypes.element(ReDomTypes.input);
let cast: ReDomTypes.element('a) => option(t);
let create: unit => t;
let value: t => string;
