section "b04_m6_080"{
    int var0 = Date_GetDateOption(2, 24);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_FP310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_310_000", 127, 40);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406080_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "As expected of the Botanical\nGardens.\nThere are a lot of flowers.");
            }
        else {
            Voice_PlayVoice("B0406080_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "As expected of the Botanical\nGardens.\nIt's all just flowers.");
            }
        Message_MsgSel("I'm happy being surrounded by flowers▼", "All these plants make the air so fresh!", "That fruit looks yummy.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You really do look happy.\nAs expected, girls like flowers,\ndon't they?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hmm, is that so. I don't know.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406080_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI don't really like the scent of all\nthese flowers mixed together...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406080_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nIt seems like it'll impair my sense\nof smell, having the scent of all\nthese flowers mixed together.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, you're right!\nYou can eat that, no?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, you're right!\nI wonder if you can eat it?\nKidding, I know it's a plant.");
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
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406080_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Having all these plants here makes\nme feel like we're lost in a jungle.");
            }
        else {
            Voice_PlayVoice("B0406080_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "With all these plants, it's like\nwe're lost in a jungle.");
            }
        Message_MsgSel("I can't believe that we're in a city.", "And we're stranded.", "Isn't it more like a forest?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406080_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes.\nI do feel that it is unbelievable in\nthat when we take a step outside, we\nwill be in the city.");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah. And it's really quiet here...\nIt might be a good idea to come here\nnow and then.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Haha!\nThen we have to make sure that we\ndon't get lost.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If you're gonna get lost, get lost\nby yourself....\nKidding, I'm just joking!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406080_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "S-Sorry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406080_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Right. A forest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406080_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This is the rose area.\nEhh, there are many varieties.");
            }
        else {
            Voice_PlayVoice("B0406080_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So this is the rose corner.\nEh, there are many varieties.");
            }
        Message_MsgSel("That brown rose is called \"Chocolate\".", "I want to be sent a rose bouquet▼", "There are no such things as blue roses.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh... that's a cute name.\nYou're quite knowledgeable, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That feeling～!\nYou know a lot, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406080_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nAre you trying to get me to send you\none?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406080_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hmph.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406080_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hmph.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406080_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm, can I ask you something?\nWhen are you glad to receive\nflowers?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406080_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I mean in general.\nNot you, but I'm talking about when\ngirls are happy...");
                Voice_PlayVoice("B0406080_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nJust forget I asked that question.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that okay?");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0406080_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nI won't be able to mature, no matter\nhow much time passes if I don't find\nthe answer myself.\nSo it's fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406080_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nThen I wonder what those things are,\nthat I occasionally see?");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406080_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI sometimes see them, though...\nI wonder what it is?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
