type t = Types.element(Types.iframe);
let cast: Element.t('a) => option(t);
let create: unit => t;
let contentWindow: t => Types.window;
