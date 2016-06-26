﻿using GalaSoft.MvvmLight.Views;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TemperatureHumidityControllee.Design
{
    /// <summary>
    /// This class is only here to avoid errors at design time.
    /// </summary>
    public class DesignNavigationService : INavigationService
    {
        public void GoBack()
        {
            // Do nothing
        }

        public void NavigateTo(string pageKey)
        {
            // Do nothing
        }

        public void NavigateTo(string pageKey, object parameter)
        {
            // Do nothing
        }

        public string CurrentPageKey
        {
            get
            {
                return null;
            }
        }
    }
}