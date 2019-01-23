type t = Types.element(Types.iframe);
let cast: Types.element('a) => option(t);
let create: unit => t;
let contentWindow: t => Types.window;
