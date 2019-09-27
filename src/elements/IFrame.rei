open ReDomTypes;

type t = element(iframe);
let cast: element('a) => option(t);
let create: unit => t;
let contentWindow: t => Dom.window;
