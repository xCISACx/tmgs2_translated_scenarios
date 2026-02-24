section "m01_m4_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(*Sigh*......... This is lame...)");
    SoundEffect_PlayStream(2, "SS_T_00_058_M00");
    Message_Who(0);
    Message_MsgDisp("主人公", "Who is it...?");
    SoundEffect_PlayStream(2, "SS_DSE_036_000");
    System_Wait(90);
    Music_PlayBGM(0, "MN_C_04_002_D02", 127, 40);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(4, "M4_01F", 0);
    SoundEffect_PlayStream(2, "SS_DSE_037_000");
    Voice_PlayVoice("M0104000_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Yo.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hariya＊＊｝!!");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 1);
    Voice_PlayVoice("M0104000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Ah, don't get up!\nYou're still not feeling well,\nright?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah... This fever won't go away...");
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("M0104000_D00200", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "............ A fever, huh...");
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("M0104000_D00300", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Oi.\nCover yourself with the futon.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh...?");
    Character_BlinkStart(4, 3, (#1));
    Voice_PlayVoice("M0104000_D00400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "It's fine!");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay...");
    SoundEffect_PlayStream(3, "SS_DSE_150_000");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(4, "NON");
    Voice_PlayVoice("M0104000_D00500", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Uhh...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Eh... This weight...)");
    Voice_PlayVoice("M0104000_D00600", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "To the futon god.\nPlease get rid of this fever.");
    Voice_PlayVoice("M0104000_D00700", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "...\nWhen I was a kid, my parents would\ndo this for me often.\nThis spell.");
    Voice_PlayVoice("M0104000_D00800", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "It was just for peace of mind,\nthough.\nBut when they did it, I could relax\nand sleep.");
    Voice_PlayVoice("M0104000_D00900", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Today...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Today?)");
    Voice_PlayVoice("M0104000_D01000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Just sleep like this today! Later!");
    Character_ChFace(0, 2, 4);
    Character_ChFace(0, 3, 2);
    Character_Chara_GS2(4, "M4_01F", 0);
    var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm, ｛Hariya＊＊｝...");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 1);
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("M0104000_D01100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "W-Who said it was okay for you to\nstick your head out!\nI told you to sleep like that!");
    Message_Who(0);
    Message_MsgDisp("主人公", "S-Sorry...");
    Character_BlinkStart(4, 3, (#1));
    Voice_PlayVoice("M0104000_D01200", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Anyway! Get well soon!");
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(4, 2, (#1));
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("M0104000_D01300", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "...\nSchool is really boring when you're\nnot there.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
    Character_BlinkStart(4, 0, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("M0104000_D01400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "... Later.");
    Music_StopBGM(0, 40);
    Character_Chara_GS2(4, "NON");
    Music_StopBGM(0, 40);
    SoundEffect_PlayStream(2, "SS_T_00_056_M00");
    System_Wait(90);
    SoundEffect_PlayStream(2, "SS_DSE_037_000");
    Message_Who(0);
    Message_MsgDisp("主人公", "(The fact that ｛Hariya＊＊｝\ncame to visit...\nIt makes me happy...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
