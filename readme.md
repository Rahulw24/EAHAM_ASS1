Hello, and Welcome to the Attendance Tracking Project

Overview of the project
1) There are 2 roles
    i ) Employee - can only check his attendance in the records
    ii) Manager  - has complete access to the page.
2)There is an option to login in the main page
    i ) if employees login - Opens the profile of the employee and allows them to only view their attendance
    ii) if managers login  - Opens the manager's profile and allows them to go the access the features of the site. 
3) In manager's tab, there are the following options
    i  ) run scanner  - i.e take attendance
    ii ) profiles     - To view all profiles registered and also edit,delete existing or add new profiles.
    iii) Present      - Shows who all is Present today
    iv ) Absent       - Shows who all is not Present today
    v  ) History      -Shows all the entries recorded. It has 2 subfeatures
        a)Search History of a USer
        b)Filter By date

How to use the project?

1) Install Python on your PC.
2) Clone this repository into your PC.
3) Activate Virtual Environment.
4) Type ' pip install -r requirements.txt ' in the python terminal(or conda prompt) after navigating to the correct folder directory(face_recognition_with_Django).
5)  After installation is done make all the migration by typing ' python manage.py makemigrations ' and ' python manage.py migrate ' in the terminal.
6) Type ' python manage.py runserver ' in the terminal and open the local host.

