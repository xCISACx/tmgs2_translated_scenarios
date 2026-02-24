section "b04_m3_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403142_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Is that so.\nWith the way I think, I think that\nyou are praising them too much.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, the ratio of parts I laughed\nat and the parts I didn't laugh at\nare 3:7.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, I could not really keep up with\ntoday's program.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403142_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I came here with the intention of it\nto be recreational, but on the\ncontrary, I am tired...");
        Message_MsgSel("I am tired from laughing.", "You should have laughed louder.", "You were watching it too seriously.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", ".........\nThe reason why people laugh or get\ntired is different for every person.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403142_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... That is impossible.\nI was doubtful over the parts I\nshould have laughed at.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... What you say is plausible.\nTrying to understand this kind of\ncomedy produced opposite results.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403142_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It has become slightly funnier.\nThe ratio is now 4:6.");
        Message_MsgSel("It was so-so to me...", "Eh, isn't the ratio 10:0!?", "Do you mean your level?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha, that is quite harsh.\nI guess only a considerably\nexceptional person could make you\nlaugh.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403142_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... I knew that you would say that.\nYour laugh was resounding in the\nLive House.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403142_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... That isn't so, right?\nIsn't it obvious I am talking about\nthe people who performed?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403142_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", ".........\nWell I certainly cannot deny the\npossibility of that.");
                Character_BlinkStart(3, 0, (#1));
                Voice_PlayVoice("B0403142_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Perhaps the standard of what makes\nme laugh has gotten lower...\nWhat do you think?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh? .........\nHmm, I might've been seeing you\nsmile more...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403142_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "R-Really?\nIt is something I would not notice,\nisn't it...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, see!\nAren't you grinning right now?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403142_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh... Ah, certainly.");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403142_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I have... changed.\nWhile talking to you, slowly...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403142_C01600", 3, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nThank you, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nI wonder what's suddenly gotten into\n｛Hikami＊＊｝...)");
                }
            break ;
            }
        }
    }
