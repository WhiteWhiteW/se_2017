#ifndef _MENU_H_
#define _MENU_H_

/* add cmd to menu */
int MenuConfig(char* cmd, char* desc, int (*handler)());

/* Menu Engine Execute */
int ExecuteMenu();

#endif /* _MENU_H_ */
