import React, { useState } from "react";
import "./App.css";
import Comment from "./Comment";
const Dashboard = () => {
  const [post, setPost] = useState([]);
  const [name, setName] = useState("");
  const [image, setImage] = useState("");
  const [des, setDes] = useState("");
  const [comment, setComment] = useState(false);

  const handleName = (e) => {
    setName(e.target.value);
  };
  const handleUrl = (f) => {
    setImage(f.target.value);
  };
  const handleDes = (g) => {
    setDes(g.target.value);
  };
  const handleButton = () => {
    const modal = {
      id: post.length === 0 ? 1 : post[post.length - 1].id + 1,
      name: name,
      url: image,
      description: des,
    };
    setPost([...post, modal]);
  };

  const handleChange = () => {};
  return (
    <div>
      <input onChange={handleName} />
      <input onChange={handleUrl} />
      <input onChange={handleDes} />
      <button onClick={handleButton}>CLICK ME</button>

      {post.map((item) => {
        return (
          <>
            <div className="container">
              <div className="box-div">
                <h1>{item.name}</h1>
                <h1>{item.name}</h1>
                <h1>{item.name}</h1>
                <h1>{item.name}</h1>
                <h1>{item.name}</h1>
                <h2>{item.url}</h2>
                <h3>{item.description}</h3>
                <button
                  onClick={() => {
                    setComment(!comment);
                  }}
                >
                  Comment
                </button>

                {comment && <Comment />}
              </div>
            </div>
          </>
        );
      })}
    </div>
  );
};

export default Dashboard;
