-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 12, 2024 at 06:36 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `williamsfinances`
--

-- --------------------------------------------------------

--
-- Table structure for table `completedservice`
--

CREATE TABLE `completedservice` (
  `custID` int(10) NOT NULL,
  `qty` int(10) NOT NULL,
  `serv_ID` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `completedservice`
--

INSERT INTO `completedservice` (`custID`, `qty`, `serv_ID`) VALUES
(2, 15, 1001),
(3, 1, 1002);

-- --------------------------------------------------------

--
-- Table structure for table `custinfo`
--

CREATE TABLE `custinfo` (
  `custID` int(4) NOT NULL,
  `custName` text NOT NULL,
  `receiptDate` date NOT NULL,
  `receiptNum` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Table structure for table `services`
--

CREATE TABLE `services` (
  `servID` int(4) NOT NULL,
  `servName` text NOT NULL,
  `servPrice` decimal(5,2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `services`
--

INSERT INTO `services` (`servID`, `servName`, `servPrice`) VALUES
(1001, 'Basic Bookkeeping', 25.00),
(1002, 'Tax Return Service', 50.00),
(1003, 'Business Accounting ', 300.00);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `completedservice`
--
ALTER TABLE `completedservice`
  ADD UNIQUE KEY `custID` (`custID`);

--
-- Indexes for table `custinfo`
--
ALTER TABLE `custinfo`
  ADD UNIQUE KEY `custID` (`custID`);

--
-- Indexes for table `services`
--
ALTER TABLE `services`
  ADD PRIMARY KEY (`servID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
