import React from 'react'
import { useState } from 'react'
import axios from 'axios'
// import { Cart } from './Cart'
export const Cardes = () => {
    
    const [products, setProducts] = useState('')
    const getProducts =  () => {
        axios.get('https://jsonplaceholder.typicode.com/posts')
    .then(response => {
        console.log(response)
        setProducts(response.data)
    }).catch(error => { console.log(error) })
}

    return (
    <div>
        {products.map((response) => {
                return <div key={response.id}><h1>{response.title}</h1> <p>{response.body}</p></div>
            })}
    </div>
  )
}
