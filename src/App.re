type state = {
  second: int,
  isTicking: bool,
};

[@react.component]
let make = () => <div> {React.string("hello world")} </div>;
