
import 'bootstrap/dist/css/bootstrap.min.css';
import Products from "./Components/Products";
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import { Navbar } from "./Components/Navbar";
import { Cart } from "./pages/cart/Cart";
import { Card } from "./pages/cart/Cardes";
import { Shop } from "./pages/shop/Shop";
function App() {
  return (
    <>
      <Router>
        {/* <Navbar/> */}
     
        <Cart/>
        <Card/>
        <Routes>
          <Route path="/" element={<Shop/>} />
          <Route path="/" element={<Shop/>} />
          <Route path="/" element={<Shop/>} />
          <Route path="/" element={<Shop/>} />
          <Route path="/Cart" element={<Cart/>} />
        </Routes>
      </Router>
{/* <Products /> */}
    </>
  );
}

export default App;
