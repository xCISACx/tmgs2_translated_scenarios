section "h43_pl_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Background_Bg_GS2("BG_SCA10_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetBkParam(4, 332) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Dai Tokyo High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Toufuu High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Daisan High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Miyamaeyama High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Konoe High School.");
            }
        else if (Parameter_GetBkParam(4, 332) == 5){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Meiwa High School.");
            }
        else if (Parameter_GetBkParam(4, 332) == 6){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Daishichi High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 7){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Daimon High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 8){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Baseball Club has a practice\nmatch today.\nThe other team is Suega High School.");
            }
        }
    else {
        Background_Bg_GS2("BG_SCA30_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetBkParam(4, 332) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Dai Tokyo High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Toufuu High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 2){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Daisan High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Miyamaeyama High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 4){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Konoe High School.");
            }
        else if (Parameter_GetBkParam(4, 332) == 5){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Meiwa High School.");
            }
        else if (Parameter_GetBkParam(4, 332) == 6){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Daishichi High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 7){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Daimon High\nSchool.");
            }
        else if (Parameter_GetBkParam(4, 332) == 8){
            Message_Who(0);
            Message_MsgDisp("主人公", "The Track and Field Club have a\npractice match today.\nThe other team is Suega High School.");
            }
        }
    System_Call_GS2("H43", "PL", 10);
    }
