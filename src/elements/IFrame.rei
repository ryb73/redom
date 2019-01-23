type t = ReDomTypes.element(ReDomTypes.iframe);
let cast: ReDomTypes.element('a) => option(t);
let create: unit => t;
let contentWindow: t => ReDomTypes.window;
