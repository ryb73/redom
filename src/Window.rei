type t = Types.window;

let window: t;

let alert: (~window: t=?, string) => unit;
let clearMessageListener: (~window: t=?, MessageEvent.t => unit) => unit;
let close: (~window: t=?, unit) => unit;
let onLoad: (~window: t=?, ReDom.LoadEvent.t => unit) => unit;
let onMessage: (~window: t=?, MessageEvent.t => unit) => unit;
let open_: (~window: t=?, ~name: string=?, string) => option(t);
let opener: (~window: t=?, unit) => option(t);
let parent: (~window: t=?, unit) => t;
let postMessage: (~window: t=?, Js.Json.t, string) => unit;
let prompt: (~window: t=?, ~message: string=?, ~default: string=?, unit) => option(string);
let set: (~window: t=?, Js.Dict.key, _) => unit;
