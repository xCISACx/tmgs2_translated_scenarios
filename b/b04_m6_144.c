section "b04_m6_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406144_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sorry.\nI'm not into that kind of music...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406144_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, really?\nFor me, that kind of music is a no.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see. I didn't quite...\nBut, if you enjoyed it, then that's\nfine.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see.\nI think that wasn't good for me, but\nI guess it's all right.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nI'm not into that kind of music....\nGood thing I'm not the only one.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, Senpai feels the same way too?\nI'm not into that kind of music,\nthat's for sure...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406144_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Everyone was jumping, my shoulders\ngot hit and now they hurt...");
            }
        else {
            Voice_PlayVoice("B0406144_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Everyone was jumping, my shoulders\ngot hit and now they hurt.");
            }
        Message_MsgSel("Are you okay? Were you hurt?", "Would've been better if we jumped with them.", "Not much of a choice since it's a live.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I'm fine. Thank you so much.\nYou're so kind, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, it's nothing serious....\nThanks for the concern!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406144_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I would have done the same thing, if\nI liked the songs...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406144_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Indeed, doing that would have been\nbetter, but I disliked the songs...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess so.\nYou'll find this happens a lot when\nyou attend lives.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That can be too.\nIt's impossible not to bump into\nsomeone during a live.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406144_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The live this time, which songs did\nyou like?");
            }
        else {
            Voice_PlayVoice("B0406144_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The live this time, which song did\nyou like?");
            }
        Message_MsgSel("The very first song they played!", "I liked song on love and dreams.", "The up-beat rhythm was interesting.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it's the latest song, isn't\nit?\nI've heard a lot of it on TV.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it's the latest bestseller\nsong.\nI think I've heard it a lot on TV.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406144_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, you like an outspoken guy.\nI really don't like to be one...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Voice_PlayVoice("B0406144_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you like those kinds?\nA handful of those kind of songs are\nnot for me.\nYou're so blunt.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406144_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, huh...\nI don't usually like music like\nthat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "For instance?");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406144_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIt's just an exaggeration, or in\nother words, it's unreliable.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406144_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nUp until now, what I heard today\nwasn't that bad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406144_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's so weird, I think I have grown\ninterested in these kinds of songs.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406144_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I probably tolerated it, thanks to\nyou.");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406144_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Maybe next time, I'd listen to\nSenpai's genre of songs.\nTell me if you have any\nrecommendations.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If you like things like that, I've\ngot better ones.\nI'll lend you the CDs next time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406144_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What? You like that kind?\nI'll lend you the CDs next time.\nThey are a lot better.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    }
