type t;
let document: t;
let body: (~document: t=?, unit) => Types.element(Types.body);
let getElementById:
  (~document: t=?, string) => option(Types.element(unit));
let createElement: (~document: t=?, string) => Types.element(unit);
