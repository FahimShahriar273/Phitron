const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function monthlySavings(payments, livingCost) {
    if (!Array.isArray(payments) || typeof livingCost !== "number") {
        return "invalid input";
    }


    let totalIncome = payments.reduce((sum, payment) => {
        return sum + (payment >= 3000 ? payment * 0.80 : payment);
    }, 0);

    // Calculate savings
    let savings = totalIncome - livingCost;

    // Return appropriate output
    if (savings > 0) {
        return savings;
    } else if (savings < 0) {
        return "earn more";
    } else {
        return 0;
    }
}

rl.question("Enter an array of payments (comma-separated): ", (inputPayments) => {
    rl.question("Enter the living cost: ", (inputLivingCost) => {
      
        const paymentsArray = inputPayments
            .split(",")
            .map(item => parseFloat(item.trim()))
            .filter(item => !isNaN(item)); 
        
        const livingCost = parseFloat(inputLivingCost);

        console.log("Output:", monthlySavings(paymentsArray, livingCost));

        rl.close();
    });
});
