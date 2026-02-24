section "i55_m1_000"{
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nWhat's up?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("I5501000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What do you mean \"What's up\"?\nI came here to buy cut flowers.\nIs there something wrong with that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ehh, do you arrange flowers,\n｛Saeki＊＊｝?");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("I5501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yes I do.\nYou should do your job, as well.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I5501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I was gonna ask you to get me some\nseasonal cut flowers.\nCan you do it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I just finished!\nPlease wait a moment.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("I5501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh, you did this, did you...?\nYou're doing well.\nYeah, these are fine.");
        }
    else {
        Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_Chara_GS2(1, "M1_??F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝. Welcome.");
        Voice_PlayVoice("I5501000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I came here to get flowers for the\ntables.\nAlso...\nI was thinking about getting more\ndecorative plants for Sangosho.");
        Character_BlinkStart(1, 0, (#1));
        Character_ChFace(0, 2, 5);
        Voice_PlayVoice("I5501000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Is there anything good for a store\nthat doesn't have much space?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right...\nWhat about something that has\nflowers attached and hangs down from\nthe ceiling?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("I5501000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah... That's a good idea.\nI wouldn't have thought of that.\nAs expected of you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, leave it to me!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
