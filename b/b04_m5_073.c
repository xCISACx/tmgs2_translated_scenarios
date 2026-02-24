section "b04_m5_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405073_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "This is a really nice view...\nThere are a lot of petals\nfluttering...");
        Message_MsgSel("Wow, it's very magical.", "It's sad that it doesn't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nIt's beautiful to the point that it\nwould be okay if this were a dream\nthat I never woke up from...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0405073_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nIsn't it something that looks\nbeautiful because the time you can\nsee it is limited?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah. That's really important. Yeah.");
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
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405073_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... Ah, a hairy caterpillar.");
        Message_MsgSel("Ah, you're right.", "Kyaa!!", "They are always with the cherry blossoms.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405073_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", ".........\nIs that all you're gonna say?\nI kinda wanted a better reaction...\nHow sad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow, what a nice reaction▼ ...\nAh, crap.\nI was supposed to hold you tight.");
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
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, they are always here.\nI wonder why.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405073_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "If you look closely, there are many\nkinds of cherry blossoms.\nDifferent colors, and different\nshapes.");
        Message_MsgSel("There are as much as 100 varieties.", "You have good eyes, ｛Chris＊＊｝.", "Cherry blossoms are cherry blossoms.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ehh～... Hey, what kinds are there?\nI want to see them all～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405073_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right. Ah, my eyesight is 5.0.\nIs that good?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405073_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right...... Yeah...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405073_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Cherry blossoms are cherry\nblossoms...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405073_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Right.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0405073_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even though there are different\nkinds, it's nothing to worry over...");
                Voice_PlayVoice("B0405073_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Only cherry blossoms aren't like\nthat.\nThey are surely just like me.");
                Voice_PlayVoice("B0405073_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nYou have lots of amazing things to\nsay.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405073_E01700", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I've gotten more courage.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
