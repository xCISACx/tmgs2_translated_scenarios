section "k01_m1_001"{
    Character_BlinkStart(1, 1, (#1), 1);
    Character_BlinkStart(1, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Character_Chara_GS2(1, "M1_01F", 0);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(1, 2, (#1));
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 1, "K0101000_A00000");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝....\nWhy did you call me out here?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, this! It's a birthday present.");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("K0101000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "For me? ... Why?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No reason! It's fine, open it!");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Character_Chara_GS2(1, "M1_01F", 0);
        Character_ChFace(0, 0, 8);
        Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Voice_PlayVoice("", 1, "K0101000_A00200");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.\nHey, I told you not to call out to\nme at school.");
        Voice_PlayVoice("K0101000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It really attracts attention when\nyou do that, you know?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, take this!\nIt's a birthday present.");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("K0101000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, I see... Sorry. Thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's fine. Open it!");
        }
    else {
        Character_Chara_GS2(1, "M1_01F", 0);
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 4, 0);
        Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_01_004_D00", 127, 40);
        Voice_PlayVoice("", 1, "K0101000_A00500");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝. What is it...\nWhy did you call me out here?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, this! It's a birthday present.");
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("K0101000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, I see... Thanks.");
        Message_Who(0);
        Message_MsgDisp("主人公", "It's fine. Open it!");
        }
    if (Parameter_GetCh1Param(1, 67) == 1){
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0101000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This is nice... Yeah, really nice.\nYou know what I like.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Don't I?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("K0101000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. I'll treasure it.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yay, it looks like he's really\nhappy!)");
        Parameter_AddCh1Param(1, 61, 3);
        Parameter_AddCh1Param(1, 60, 2);
        Parameter_AddCh1Param(1, 62, #3);
        }
    else if (Parameter_GetCh1Param(1, 67) == 2){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0101000_A00900", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh... You have good senses.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, it looks like he's relatively\nhappy, I think?)");
        Parameter_AddCh1Param(1, 61, 1);
        Parameter_AddCh1Param(1, 60, 0);
        Parameter_AddCh1Param(1, 62, #1);
        }
    else if (Parameter_GetCh1Param(1, 67) == 3){
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("K0101000_A01000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I don't know what reaction I should\nhave when I get something like\nthis...");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It looks like he's not that happy\nabout it...)");
        Parameter_AddCh1Param(1, 61, #1);
        Parameter_AddCh1Param(1, 60, #2);
        Parameter_AddCh1Param(1, 62, 2);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
