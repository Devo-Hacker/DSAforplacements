/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
    let promise2 = new Promise(resolve => setTimeout(() => resolve(millis), millis));
    return promise2;

}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */