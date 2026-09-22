#include "models.h"
#include <iostream>
#include <vector>

double RIM() {
    /* function prep
     * variables needed:
     * bvps (assets, liabilities, shares outstanding), 
     * cost of equity (risk free rate, beta, market return),
     * net margin,
     * revenue,
     * revenue growth rate,
     * net share issuance rate,
     * terminal growth rate, 
     * dividend payout ratio
     */

    // raw inputs
    double assets, 
           liabilities, 
           shares,
           risk_free_rate,
           beta, 
           market_return, 
           net_margin, 
           revenue_0, 
           revenue_growth_rate, 
           net_share_issuance_rate, 
           terminal_growth_rate, 
           dividend_payout_ratio, 
           forecast_years;

    // calculated variables
    double BV_0 = assets - liabilities;
    double r_e = riskFreeRate + beta * (marketReturn - riskFreeRate);
    double RI_t;
    double revenue_prior = revenue_0;
    double net_income_0 = revenue_0 * net_margin

    /* loop for forecasts */
    // use vectors to hold calculated values in each forecast year
    // i think i can use just 1 for loop, maybe? to calculate and input each value to each vector
    std::vector<double> revenue_list = {revenue_0};
    std::vector<double> net_income_list = {net_income_0};
    std::vector<double> BV_list = {BV_0};
    std::vector<double> RI_list = {RI_0};
    for (int i = 1; i <= forecastYears; i++) {
        // rev
        double revenue_t = revenue_prior * revGrowthRate;
        revenue_list.push_back(revenue_t);
        revenue_prior = revenue_t;

        // earnings
        double net_income_t = revenue_t * net_margin;

        // BV

        // RI

    }


    /* equation calculation */

    /* return */
}
