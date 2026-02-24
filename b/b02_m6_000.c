section "b02_m6_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that's the gift I've given to\nyou.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, it is. Does it suit me?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, very much!\nI think it was good to give you that\npresent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit!\nIt was a good idea to wear it.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0206000_F05000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, as I thought, it gives me a good\nfeeling!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, what does?");
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Voice_PlayVoice("B0206000_F05100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Not \"what does\". Me!\nThe guy who gave you the gift!\nIt's nice that you're fond of it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit!\nIt was a good idea to wear it.)");
            }
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0206000_F05600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, a yukata!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, what do you think?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F05700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's lovely.\nIt sure is best to wear a yukata on\nfestivals.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit!\nIt was a good idea to wear it!)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F05800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I came wearing a yukata.\nWhat do you think?");
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F05900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Y-Yeah.\nYou look like a person I don't\nrecognize...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? You don't like it?");
            Character_ChFace(1, 0, 11);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0206000_F06000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "No, no! It really does suit you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit!\nGood thing I'm wearing it!)");
            }
        Parameter_AddCh1Param(6, 61, 5);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 7, 1);
            Voice_PlayVoice("B0206000_F05200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "................");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What's the matter?");
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F05300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Nothing......\nI feel like you've worn the same\noutfit before...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Damn it! He totally remembered...)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F05400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai.....\nMaybe it's better to be a little\ncareful?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh!? Why is that?");
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(6, 3, (#1), 2);
            Voice_PlayVoice("B0206000_F05500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Because that's the same outfit as\nbefore.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Damn it! He remembered...)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 9);
            Voice_PlayVoice("B0206000_F03200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "T-That's an amazing outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Is this outfit that weird?");
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0206000_F03300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry.\nHonestly, I think it's\nunbelievable...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I should have put more thought\ninto choosing an outfit...)");
            }
        else {
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0206000_F03400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Pfft! Ahahaha!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Wh-What's wrong?");
            Character_ChFace(1, 0, 9);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Weird outfit～!\nI see, you own things like that.\nYou actually spent money on that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, I should have put more thought\ninto choosing an outfit...)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm... Are you alright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, why?");
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0206000_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, nothing, I was just wondering if\nyou were warm in those clothes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You know what...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? What's wrong?");
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You're what's wrong.\nWhy are you wearing something thick?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Umm.... Are you alright?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, why?");
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Voice_PlayVoice("B0206000_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, nothing, I was just wondering if\nyou were warm in those clothes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0206000_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Woah! What's with that outfit?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, what's wrong...?");
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aren't you cold? Oh!\nOr is it because you have excellent\nhealth?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have paid attention to the\nseason.)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 11);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "............");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-What's wrong?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... N-Nothing.\nPeople have different tastes...\nIt's not a problem even if I am to\ncomment.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have given more thought to\ncoordination.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Pfft! Ahahaha!");
            Message_Who(0);
            Message_MsgDisp("主人公", "W-What's wrong?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Weird outfit!\nMy first time seeing such an outfit!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI should have given more thought to\ncoordination.)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 1);
            Voice_PlayVoice("B0206000_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, this outfit? Is it weird?");
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Voice_PlayVoice("B0206000_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, no, that's not it...\nMaybe my tastes are just a little\ndifferent...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nSomething other than this would have\nbeen better.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, that outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, this outfit? Is it weird?");
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah... Fair enough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nSomething other than this would have\nbeen better.)");
            }
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0206000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It really looks good on you!\nI like that kind of outfit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\n｛Amachi＊＊｝ seems to like\nthis outfit.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0206000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ooh, you look good!\nYeah, very much so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\n｛Amachi＊＊｝ seems to like\nthis outfit.)");
            }
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? This look?");
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0206000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. It really does suit you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nthis outfit a bit!\nGood...)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Voice_PlayVoice("B0206000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That outfit...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? This look?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0206000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. That.... Hmmm...\nYou look quite good in it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nthis outfit a bit!\nGood...)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0206000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's a nice color.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, this color?");
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0206000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah! I actually like that color.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ likes gray.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Voice_PlayVoice("B0206000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Nice color.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, this color?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, that one! I like that color.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ likes gray.)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that.\nThat's in fashion right now.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, you mean this\n｛流行服名｝?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes. Senpai is surely fashionable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good thing I checked trends!)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F03800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that's the latest trendy item\nright now!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, you mean this\n｛流行服名｝?");
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0206000_F03900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh. It suits you quite a bit.\nGood sense!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good thing I checked trends!)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0206000_F04000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've seen a lot of that color,\nlately.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it looks like it's in fashion.");
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Voice_PlayVoice("B0206000_F04100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. Good taste! It suits you well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great, he seems to like this!)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0206000_F04200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I've seen a lot of that color,\nlately.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it looks like it's in fashion.");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. That's nice, right?\nYou have good taste!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great, he seems to like this!)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh... That suits you well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, this ｛流行アクセサリ名｝?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah. It's the latest trend, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit.)");
            }
        else {
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ooh, it looks good on you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, this ｛流行アクセサリ名｝?");
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0206000_F04700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Uh-huh.\nIt's one of the trends, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ seems to like\nit.)");
            }
        Parameter_AddCh1Param(6, 61, 1);
        Parameter_AddCh1Param(6, 60, 0);
        Parameter_AddCh1Param(6, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
