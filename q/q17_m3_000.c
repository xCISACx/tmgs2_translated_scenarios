section "q17_m3_000"{
    if (System_GlobalWork(0, 1) == 1){
        if (System_GlobalWork(23, 1) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* That was fun!");
            Voice_PlayVoice("FD_03_060_00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I agree, what a productive day.\nHowever, your thoughts on\nproductivity must be a bit\ndifferent, am I right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nBut ｛Hikami＊＊｝ made it\nmemorable for me.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("FD_03_060_00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I should say that...\nBecause it never occurred to me that\nI would wander around with someone.\nThank you.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_BlinkStart(3, 0, (#1));
            Voice_PlayVoice("FD_03_060_00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Well then, I will be off to patrol\naround the hotel premises.\nExcuse me!");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("Q0803000_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "What a productive day.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, same here.\nThank you for asking me out.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0803000_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that so? Then good....\nThere is a leisure day coming up.\nLet us roam again together.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, let's do that!");
            Voice_PlayVoice("Q0803000_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Let us make this our meeting place.\nI will be expecting you here the day\nafter tomorrow then.");
            }
        else if (Parameter_GetCh1Param(3, 130) >= 4){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("Q0803000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Thanks to you the entire day turned\nout worthwhile.\nThank you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, same here.\nThank you for asking me out.");
            Voice_PlayVoice("Q0803000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am glad that you said so....\nIf you are that happy, then maybe I\ncould ask...");
            Message_Who(0);
            Message_MsgDisp("主人公", "...?");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0803000_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "L-Look, there is a free day coming\nup....\nI was wondering if you wanted to\nvisit places again together?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sure thing!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(3, 2, (#1));
            Voice_PlayVoice("Q0803000_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see! So, let us meet here.\nI cannot wait for the day after\ntomorrow to arrive.");
            }
        }
    else if (System_GlobalWork(0, 1) == 2){
        if (Parameter_GetCh1Param(3, 130) <= 2){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("Q0803000_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Indeed so.\nThank you for asking me out today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're welcome.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0803000_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "There is a leisure day coming up.\nI was wondering if you are free to\njoin me, again?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sure.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0803000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So, let's meet here.\nI will be expecting you on the day\nafter tomorrow then.");
            }
        else if (Parameter_GetCh1Param(3, 130) == 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah～! That was fun!");
            Voice_PlayVoice("Q0803000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Indeed.\nSpending the entire day together was\nworthwhile.\nThank you for asking me out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're welcome.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0803000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "The two of us roaming together does\nnot seem a bad idea....\nWould you be kind enough to go out\nwith me day after tomorrow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, sure!");
            Voice_PlayVoice("Q0803000_C01200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Great, it is settled then.\nSo, let us meet here.\nI will be expecting you on the day\nafter tomorrow then.");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "*Sigh* That was fun!");
            Voice_PlayVoice("Q0803000_C01300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "True, thanks to you this entire day\nturned out to be worthwhile.\nThank you for asking me out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Don't mention it!");
            Voice_PlayVoice("Q0803000_C01400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am not saying this for gratitude\nbut, next time, umm...\nI wonder if I can ask you out\ninstead?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("Q0803000_C01500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "L-Look, there is a leisure day\ncoming up, right?\n...\nI was wondering if you want to go\naround again together?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, of course!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0803000_C01600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Is that so! So, let us meet here.\nI will be expecting you the day\nafter tomorrow then.");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
