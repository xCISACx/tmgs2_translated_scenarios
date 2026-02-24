section "b03_m7_021"{
    int var0;
    var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        System_GlobalWork(1, 0, 0);
        Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(7, 2, (#1), 2);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("", 7, "B0307020_G00800");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, Let's try to\nget away from the shore for a bit.");
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh...?");
        Message_ResumeSkinship();
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0307020_G00900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Let's take the sightseeing cruise\naround the bay.");
        }
    else if (var0 == 1){
        System_GlobalWork(1, 0, 1);
        Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("", 7, "B0307020_G01000");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "｛主人公｝, should we go\nout on an adventure?");
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm... What kind of an adventure?");
        Message_ResumeSkinship();
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0307020_G01100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "A runaway trip.\nLet's simply run away to the sea.\nI want to take the sightseeing\ncruise.");
        }
    else if (var0 == 2){
        System_GlobalWork(1, 0, 2);
        Character_Chara_GS2(7, "M7_06F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307020_G01200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Ah, but there's a problem.\nWhere would I want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well... Could I get a hint?");
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0307020_G01300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Hint, my \"favorite place\".\nI go there over and over.");
        Message_Who(0);
        Message_MsgDisp("主人公", "So... the sightseeing cruise?");
        Message_ResumeSkinship();
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0307020_G01400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Exactly. Okay, let's go.");
        }
    Character_Chara_GS2(7, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M7", 24);
    }
