type t = Types.window;

let window: t;

let onMessage: (~window: t=?, MessageEvent.t => unit) => unit;
let clearMessageListener: (~window: t=?, MessageEvent.t => unit) => unit;
let postMessage: (~window: t=?, Js.Json.t, string) => unit;
let parent: (~window: t=?, unit) => t;
let close: (~window: t=?, unit) => unit;
let alert: (~window: t=?, string) => unit;
let opener: (~window: t=?, unit) => option(t);
let open_: (~window: t=?, ~name: string=?, string) => option(t);
let prompt: (~window: t=?, ~message: string=?, ~default: string=?, unit) => option(string);
