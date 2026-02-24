section "b04_m1_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401144_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The best, huh...\nWell, maybe to the guys who like\nthis kinda thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nI didn't know of this kinda thing,\nbut it's quite good.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Really?\nAlthough there were some parts that\nwere just plain noisy, it was kinda\nfun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401144_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "When you listen carefully, the\nlyrics are kinda nice.");
        Message_MsgSel("Eh, you understand English?", "They were strong lyrics with a message.", "Feel it more with your body instead!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, generally....\nDon't ask me any more.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt made everyone think about\ndifferent things.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401144_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "How I listen to it is up to me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401144_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hey...\nThis is what I thought, but with\nhip-hop--");
        Message_MsgSel("A duet would be enjoyable, right?", "Seems like something you could do?", "It's hip to the hop!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh... right.\nI kinda wanna see something like\nthat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401144_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Eh? I wonder...\nIt's kinda impossible for me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401144_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... I shouldn't have asked.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0401144_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "What the hell was that...?\nBut maybe you could say that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "?");
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("B0401144_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's kinda like jazz.\nThe rhythm gradually changes, and\nit's something you can only feel at\nthat moment...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... maybe.");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401144_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even if we came to watch again, we\nsurely wouldn't be able to see what\nwe saw today.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nNow that I think about it, I kind of\nfeel like I've gained something!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0401144_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Yeah.\nI'm glad we came together to watch.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like ｛Saeki＊＊｝\nreally likes it)");
                }
            break ;
            }
        }
    }
