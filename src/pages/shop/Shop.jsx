import React from 'react'

export const Shop = () => {

  let products = [
    {id: 1, name: "Product 1", price: 100},
    {id: 2, name: "Product 2", price: 200},
    {id: 3, name: "Product 3", price: 300}
]


  return (
    <section style={{ backgroundColor: "#eee" }}>
    <div className="container py-5">
      <div className="row justify-content-center">
        <div className="col-md-8 col-lg-6 col-xl-4">
          <div className="card text-black">
            <i className="fab fa-apple fa-lg pt-3 pb-1 px-3" />
            <img
              src="https://mdbcdn.b-cdn.net/img/Photos/Horizontal/E-commerce/Products/3.webp"
              className="card-img-top"
              alt="Apple Computer"
            />
            <div className="card-body">
              <div className="text-center">
                <h5 className="card-title">Tech product</h5>
                <p className="text-muted mb-4">{ products.name }</p>
              </div>
              <div>
                <div className="d-flex justify-content-between">
                  <span>Pro Display XDR</span>
                  <span>$5,999</span>
                </div>
              </div>
              <div className="d-flex justify-content-between total font-weight-bold mt-4">
                <span>Total</span>
                <span>$7,197.00</span>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>
  
  )
}
