section "l06_m2_000"{
    if (System_GlobalWork(23, 1) == 2){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(2, 2, (#1));
        Character_Chara_GS2(2, "M2_01F", 0);
        Voice_PlayVoice("", 2, "FD_02_030_00000");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.\nFor the chocolate.........");
        Message_Who(0);
        Message_MsgDisp("主人公", "W-What's up?");
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(2, 0, (#1));
        Voice_PlayVoice("FD_02_030_00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nothing.\nI was just thinking that maybe it'd\nbe better to only get something from\nhim....\nWhatever, here.");
        Character_Chara_GS2(2, "NON");
        Music_StopBGM(0, 40);
        }
    else if (Parameter_GetCh1Param(2, 130) <= 2){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(2, "M2_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Voice_PlayVoice("", 2, "L0602000_B00001");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... ｛主人公｝. Here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("L0602000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nToday is the day where I have to\ngive something in return for\nValentine's Day, right?\nAm I wrong?");
        Message_Who(0);
        Message_MsgDisp("主人公", "N-No, you're right.\nThanks, ｛Shiba＊＊｝.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, this is just out of\nobligation.)");
        }
    else if (Parameter_GetCh1Param(2, 130) >= 3){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(2, "M2_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_000_D00", 127, 40);
        Voice_PlayVoice("", 2, "L0602000_B00200");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.... Here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "What?");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 7, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0602000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Thanks.... For the chocolate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm glad!\nThanks, ｛Shiba＊＊｝.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0602000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI don't know how to respond when\nyou're gonna be that happy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0602000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nothing. Later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        if (Parameter_GetCh1Param(2, 330) == 0){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Mini Wooden Rabbit Ornament\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, it's cute!\nI'll put it in my room when I get\nhome!)");
            Parameter_AddCh1Param(2, 330, 1);
            Parameter_AddPl1Param(22, #10);
            }
        else if (Parameter_GetCh1Param(2, 330) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I wonder what this present is?)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(\"Black Rabbit Soft Toy\")");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, it's a fluffy toy!\nIt's kind of soothing...\nI'll treasure it!)");
            Parameter_AddPl1Param(21, 10);
            Parameter_AddPl1Param(22, #10);
            }
        }
    Parameter_InCh1Param(2, 555, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
