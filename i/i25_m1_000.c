section "i25_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I2501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Nothing... Hello.\nI was just passing by.... Later.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome.");
        Voice_PlayVoice("I2501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's not like I'm here to shop.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, you're just window shopping?");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I2501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. You're working quite hard.\nYou still haven't been fired.");
        Character_BlinkStart(1, 0, (#1));
        Voice_PlayVoice("I2501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well, keep working hard.");
        }
    else {
        Background_Bg_GS2("BG_AR200_?_0", 1, #1, 0);
        Character_ChFace(0, 3, 2);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝! Welcome.");
        Voice_PlayVoice("I2501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ack... You're here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I am. I work here.\nWhat are you looking for?");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I2501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, just... Guitar strings.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, you play the guitar, don't you?");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("I2501000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well. So what if I do...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
