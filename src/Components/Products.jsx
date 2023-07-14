import React from 'react'

function Products() {
    let title = "Products Page"
    let products = [
        {id: 1, name: "Product 1", price: 100},
        {id: 2, name: "Product 2", price: 200},
        {id: 3, name: "Product 3", price: 300}
    ]



  return (
    <>
  
       <div className="card">
        <img className="card-img-top" src="https://unsplash.com/fr/photos/boIJluEJEPM" alt="sss"/>
        <div className="card-body">
            <h4 className="card-title">Product</h4>
            <p className="card-text">Lorem ipsum dolor sit amet consectetur adipisicing elit. Est suscipit aspernatur minima adipisci itaque, consequatur sequi nostrum aut repellat excepturi aliquid repellendus, magnam, autem sint amet quos quod nesciunt? Numquam.</p>
            <ul className='list-group'>
            {products.map((product) => {
                return <li className='list-group-item' key={product.id}>{product.name} - {product.price}</li>
            })}
        </ul>

        </div>
       </div>
        <h1>{title} </h1>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Est suscipit aspernatur minima adipisci itaque, consequatur sequi nostrum aut repellat excepturi aliquid repellendus, magnam, autem sint amet quos quod nesciunt? Numquam.</p>

       
    </>
    
  )
}

export default Products