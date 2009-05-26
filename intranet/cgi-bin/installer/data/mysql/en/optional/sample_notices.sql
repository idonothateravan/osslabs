INSERT INTO `letter`
(module, code, name, title, content)
VALUES
('circulation','ODUE','Overdue Notice','Item Overdue','Dear <<borrowers.firstname>> <<borrowers.surname>>,\r\n\r\nAccording to our current records, you have items that are overdue.Your library does not charge late fines, but please return orrenew them as soon as possible.\r\n\r\n<<branches.branchname>><<branches.branchaddress1>><<branches.branchaddress2>><<branches.branchaddress3>><<branches.branchphone>><<branches.branchfax>><<branches.branchemail>>If you have registered a password with the library, you may use it withyour library card number to renew online. If an item becomes more than 30 days overdue, you will be unable to use your library card until the item is returned. The following item is currently overdue:\r\n\r\n<<items.content>>'),
('claimacquisition','ACQCLAIM','Acquisition Claim','Item Not Received','<<aqbooksellers.name>>\r\n<<aqbooksellers.address1>>\r\n<<aqbooksellers.address2>>\r\n<<aqbooksellers.address3>>\r\n<<aqbooksellers.address4>>\r\n<<aqbooksellers.phone>>\r\n\r\nOrdernumber <<aqorders.ordernumber>> (<<aqorders.title>>) (<<aqorders.quantity>> ordered) ($<<aqorders.listprice>> each) has not been received.'),
('serial','RLIST','Routing List','Serial is now available','<<borrowers.firstname>> <<borrowers.title>>,\r\n\r\nThe following issue is now available:\r\n\r\n<<items.content>>\r\n\r\nPlease pick it up at your convenience.'),
('members','ACCTDETAILS','Account Details Template - DEFAULT','Your new Koha account details.','Hello <<borrowers.title>> <<borrowers.firstname>> <<borrowers.surname>>.\r\n\r\nYour new Koha account details are:\r\n\r\nUser:  <<borrowers.userid>>\r\nPassword: <<borrowers.password>>\r\n\r\nIf you have any problems or questions regarding your account, please contact your Koha Administrator.\r\n\r\nThank you,\r\nKoha Administrator\r\nkohaadmin@yoursite.org'),
('circulation','DUE','Item Due Reminder','Item Due Reminder','Dear <<borrowers.firstname>> <<borrowers.surname>>,\r\n\r\nThe following item is now due:\r\n\r\n<<items.content>>'),
('circulation','DUEDGST','Item Due Reminder (Digest)','Item Due Reminder','You have <<count>> items due'),
('circulation','PREDUE','Advance Notice of Item Due','Advance Notice of Item Due','Dear <<borrowers.firstname>> <<borrowers.surname>>,\r\n\r\nThe following item will be due soon:\r\n\r\n<<items.content>>'),
('circulation','PREDUEDGST','Advance Notice of Item Due (Digest)','Advance Notice of Item Due','You have <<count>> items due soon'),
('circulation','EVENT','Upcoming Library Event','Upcoming Library Event','Dear <<borrowers.firstname>> <<borrowers.surname>>,\r\n\r\nThis is a reminder of an upcoming library event in which you have expressed interest.');
