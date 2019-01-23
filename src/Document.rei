type t;
let document: t;
let body: (~document: t=?, unit) => ReDomTypes.element(ReDomTypes.body);
let getElementById:
  (~document: t=?, string) => option(ReDomTypes.element(unit));
let createElement: (~document: t=?, string) => ReDomTypes.element(unit);
