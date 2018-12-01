type t;
let document: t;
let body: t => Types.body;
let getElementById:
  (~document: t=?, string) => option(Types.element(unit));
let createElement: (~document: t=?, string) => Types.element(unit);
