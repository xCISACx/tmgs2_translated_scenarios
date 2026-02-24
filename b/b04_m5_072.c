section "b04_m5_072"{
    int var0 = Date_GetDateOption(2, 20);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405072_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's gotten warmer.");
        Message_MsgSel("Look, there's a butterfly flying!", "It seems like napping here would be nice.", "We must be wary of UV Rays!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405072_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh? Where? ...\nIsn't it just a plastic bag...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah～.\nI want to sit around doing nothing.\nTaking a nap would be nice, too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. UV Rays are our skin's enemy.\nWe have to properly guard ourselves.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405072_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, a line of ants.\nI wonder for how long the line goes\non for.");
        Message_MsgSel("It's better to not get close to a-ants...", "Did someone drop something yummy?", "Alright, line up, line up!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you don't like bugs.\nYou really are a girl▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ants really have a sense for those\nthings.\nShould we also try following them?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0405072_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Eh, what? Are they gathering...\nbecause they saw my family crest on\nmy clothing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP220_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405072_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, the lion flower.\nLook, there are heaps.");
        Message_MsgSel("Are you talking about dandelions?", "That's a cute way of calling them.", "... What is that?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, yeah.\nEven though it has a name that's\neasy to remember, I wonder why I\ncan't remember it...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405072_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hehe. You should use it, too.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405072_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "These flowers... Hmm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405072_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "These flowers... Hmm...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405072_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ah, dandelions!\nAh, I remembered it～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why are they lion flowers?");
                Voice_PlayVoice("B0405072_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Because in English, they're called\n\"dandelions\".");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nAh, because the flower petals look\nlike a lion's mane.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405072_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No, not that.");
                Voice_PlayVoice("B0405072_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The jagged leaves look exactly like\na lion's teeth.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh, is that so...\nYou know quite a lot,\n｛Chris＊＊｝.");
                Voice_PlayVoice("B0405072_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "They also tell your fortunes.\nIf you can blow away all these\nfluffy things in one go, your love--");
                Message_Who(0);
                Message_MsgDisp("主人公", "Love?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405072_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... The rest is a secret.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh.");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405072_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I was trying it out earlier.\nI wanna see if it's true, so I'll\nlet you know if I get a result.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay, be sure to tell me.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405072_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
