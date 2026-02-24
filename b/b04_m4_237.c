section "b04_m4_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D01700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The intensity of the bike race is\namazing...");
        Message_MsgSel("I haven't seen bikes like these.", "Wah, it looks like they'll fall...!", "They've done quite a few laps.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Once you graduate, get a license and\nyou can ride one.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hahaha, true!\nThe rush speed is beyond comparison\nto what you see on TV.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404235_D02000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't say it as if you're happy...\nThey're gambling with their lives,\nyou know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D02100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'm awfully excited when I see a\nrace...");
        Message_MsgSel("What a serious match!", "It'd be scarier if you got too close.", "I'd want to see a huge crash.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_BlinkStart(4, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, my heart's beating so fast...\nIt felt the same way up on stage.\nSo, maybe that's why my heart's\nbeating fast.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D02300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "There's no point if you're not close\nenough.\nYou'll lose the whole fun of it if\nyou watch it from afar.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404235_D02400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This isn't like the movies or the\ndramas, you know.\nYou do have the gall to say the\nworst things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Japan's best top playoff!\nThat sounds good!");
        Message_MsgSel("You'd be lucky to see it!", "Japan's best would be great!", "Just don't get too excited.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D02600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nIt's a fact, you can't see this kind\nof stuff easily.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D02700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, don't get stunned.\nI'll stand at the top with my music!\nWatch me!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404235_D02800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If I'm not supposed to be hyped\nabout it here, then where should I\ngo to get hyped?\nDon't say boring stuff.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(4, 61, 3);
        Parameter_AddCh1Param(4, 60, 2);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(4, 61, 0);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #2);
        Parameter_AddCh1Param(4, 62, 2);
        }
    }
