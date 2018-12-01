type t = Types.element(Types.input);
let cast: Element.t('a) => option(t);
let create: unit => t;
let value: t => string;
