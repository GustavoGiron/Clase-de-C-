import React, { useState } from "react";
import logo from "./logo.svg";
import "./App.css";

function App() {
  const [usuario, setUsuario] = useState({
    nombre: "",
    apellido: "",
    edad: 0,
  });

  const handleInputChange = (event) => {
    const { name, value } = event.target;
    setUsuario({ ...usuario, [name]: value });
  };
  
  const [usuarios, setUsuarios] = useState([]);
  const [listado, setListado] = useState([]);

  const handleSubmit = (event) => {
    event.preventDefault();
    alert("Usuario ingresado: " + usuario.nombre + " / " + usuario.apellido);
    setUsuarios([...usuarios, usuario]);
  };

  function mostrarUsuarios(){
    const usuariosList = usuarios.map((user, index) => (
      <div kekey={index}>
          <h3>Nombre: {user.nombre}</h3>
          <h3>Apellido: {user.apellido}</h3>
          <h3>Edad: {user.edad}</h3>
      </div>
      
    ));
    setListado(usuariosList);
  };


  return (
    <div className="App">
      <header className="App-header">
        <h1>REGISTRO DE USUARIOS</h1>
        <form onSubmit={handleSubmit}>
          <label>
            Nombre:
            <input type="text" name="nombre" value={usuario.nombre} onChange={handleInputChange}/>
          </label>
          <br />
          <label>
            Apellido:
            <input type="text" name="apellido" value={usuario.apellido} onChange={handleInputChange}/>
          </label>
          <br />
          <label>
            Edad:
            <input type="text" name="edad" value={usuario.edad} onChange={handleInputChange}/>
          </label>
          <br />
          <button  type="submit" >Registrar Usuario</button>
        </form>

        <h2>Usuarios registrados</h2>
        <button onClick={mostrarUsuarios}>Mostra</button>
          {listado}
      </header>
    </div>
  );
}

export default App;
