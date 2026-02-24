section "b04_m1_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401145_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's impossible for me to like this.\nI'll probably never be able to\nunderstand.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401145_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right.\nWell, if you think of it as a\ncomedy.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401145_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Because it's noisy. It's crowded.\nIt's uncomfortable.\nIt meets all three conditions...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401145_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "As expected, these guys like putting\non make-up, right?");
        Message_MsgSel("They're also fussy about that.", "Wouldn't it suit you, ｛Saeki＊＊｝?", "They put it on better than I do...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401145_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "They should be fussy over other\nthings, right?\nSince they're a band.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0401145_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Drop it. Don't ever... imagine it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401145_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... That's a serious problem.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401145_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I can't get used to this no matter\nhow many times I watch it.\nBut if I listen closely, these guys\nhave quite good songs.");
        Message_MsgSel("Even you praised them, ｛Saeki＊＊｝...", "Who cares about their songs!?", "You finally realized?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0401145_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "*sigh*...\nDo you mind explaining what you\nmeant by that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0401145_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "These guys put on make-up to please\nthe audience...\nI kinda pity these guys.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0401145_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ehh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm?");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401145_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "No... yeah.\nTheir songs don't matter.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("B0401145_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's nothing....\nRight, who cares about their\nsongs...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's with him?\nHe looks kind of glad...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401145_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Huh? Is that what Visual Kei is?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
